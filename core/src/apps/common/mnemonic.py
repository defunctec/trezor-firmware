from trezor import ui, workflow
from trezor.crypto import bip39

from apps.common import storage

TYPE_BIP39 = 0


def get() -> (bytes, int):
    mnemonic_secret = storage.get_mnemonic_secret()
    mnemonic_type = storage.get_mnemonic_type() or TYPE_BIP39
    return mnemonic_secret, mnemonic_type


def get_seed(passphrase: str = "", progress_bar=True):
    secret, mnemonic_type = get()
    if mnemonic_type == TYPE_BIP39:
        module = bip39
    if progress_bar:
        _start_progress()
        result = module.seed(secret.decode(), passphrase, _render_progress)
        _stop_progress()
    else:
        result = module.seed(secret.decode(), passphrase)
    return result


def process(mnemonics: list, mnemonic_type: int):
    if mnemonic_type == TYPE_BIP39:
        return mnemonics[0].encode()
    else:
        raise RuntimeError("Unknown mnemonic type")


def restore() -> str:
    secret, mnemonic_type = get()
    if mnemonic_type == TYPE_BIP39:
        return secret.decode()


def _start_progress():
    ui.backlight_fade(ui.BACKLIGHT_DIM)
    ui.display.clear()
    ui.header("Please wait")
    ui.display.refresh()
    ui.backlight_fade(ui.BACKLIGHT_NORMAL)


def _render_progress(progress: int, total: int):
    p = 1000 * progress // total
    ui.display.loader(p, False, 18, ui.WHITE, ui.BG)
    ui.display.refresh()


def _stop_progress():
    workflow.restartdefault()
