from trezor import ui
from trezor.messages import ButtonRequestType
from trezor.ui.text import Text

from apps.common.confirm import require_confirm


async def require_get_public_key(ctx, public_key):
    text = Text("Confirm public key", ui.ICON_RECEIVE, ui.GREEN)
    text.normal(public_key)
    return await require_confirm(ctx, text, ButtonRequestType.PublicKey)


async def require_sign_tx(ctx, num_actions):
    text = Text("Sign transaction", ui.ICON_SEND, ui.GREEN)
    text.normal("You are about")
    text.normal("to sign {}".format(num_actions))
    text.normal("action(s).")
    return await require_confirm(ctx, text, ButtonRequestType.SignTx)
