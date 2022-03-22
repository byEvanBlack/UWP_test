using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using Microsoft.Toolkit.Uwp.Notifications;
using Microsoft.AppCenter;
using Microsoft.AppCenter.Unity;
using Microsoft.AppCenter.Unity.Analytics;
using Microsoft.AppCenter.Unity.Crashes;



public class Test : MonoBehaviour
{
    void Start()
    {
        //Type[] serviceArray = { typeof(Analytics), typeof(Crashes) };
        //AppCenter.StartFromLibrary(serviceArray);
    }

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
