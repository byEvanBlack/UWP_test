using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Metaverse.Plugins;



public class Test : MonoBehaviour
{
    public void OnClick()
    {
        string path = "file:///C:/Working/RnD/UWP_test/Assets/Project/Resources/";

        List<ToastText> binding = new List<ToastText>();
        binding.Add(new ToastText("TITLE", ToastTextType.TITLE));
        binding.Add(new ToastText("text1", ToastTextType.NORMAL));
        binding.Add(new ToastText("text2", ToastTextType.NORMAL));
        binding.Add(new ToastText("attribution", ToastTextType.ATTRIBUTION));

        List<ToastImage> image = new List<ToastImage>();
        image.Add(new ToastImage(path + "img_hero.png", ToastImageType.HERO));
        //image.Add(new ToastImage(path + "img_logo.png", ToastImageType.SQUARE_LOGO));
        image.Add(new ToastImage(path + "img_logo.png", ToastImageType.CIRCLE_LOGO));
        image.Add(new ToastImage(path + "img_inline.png", ToastImageType.INLINE));

        ToastGenerator.GenerateToast(binding, image, null);
    }
}
