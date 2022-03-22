using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.Toolkit.Uwp.Notifications;
using System.Windows;



public class Test : MonoBehaviour
{
    public void OnClick()
    {
        Debug.Log("Alert");

        ToastContentBuilder content = new ToastContentBuilder();
        content.AddArgument("action", "viewConversation")
               .AddArgument("conversationId", 9813)
               .AddText("Andrew sent you a picture")
               .AddText("Check this out, The Enchantments in Washington!");
    }
}
