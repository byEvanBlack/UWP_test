using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Metaverse.Plugins;



public class Test : MonoBehaviour
{
    public void OnClick()
    {
        List<ToastText> binding = new List<ToastText>();
        binding.Add(new ToastText("TITLE", ToastTextType.TITLE));
        binding.Add(new ToastText("text1", ToastTextType.NORMAL));
        binding.Add(new ToastText("text2", ToastTextType.NORMAL));
        binding.Add(new ToastText("attribution", ToastTextType.ATTRIBUTION));

        List<ToastImage> image = new List<ToastImage>();
        image.Add(new ToastImage("https://picsum.photos/364/180?image=200", ToastImageType.HERO));
        image.Add(new ToastImage("https://picsum.photos/48?image=400", ToastImageType.SQUARE_LOGO));
        //image.Add(new ToastImage("https://picsum.photos/48?image=400", ToastImageType.CIRCLE_LOGO));
        image.Add(new ToastImage("https://picsum.photos/360/202?image=600", ToastImageType.INLINE));

        ToastGenerator.GenerateToast(binding, image, null);
    }
}
