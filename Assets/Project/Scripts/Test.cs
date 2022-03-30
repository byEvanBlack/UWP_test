using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Metaverse.Plugins;



public class Test : MonoBehaviour
{
    public Button _toastButton;
    public Button _tileButton;
    public Button _badgeButton;
    public Button _clearButton;

    private void Start()
    {
        _toastButton.onClick.AddListener(OnToast);
        _tileButton.onClick.AddListener(OnTile);
        _badgeButton.onClick.AddListener(OnBadge);
        _clearButton.onClick.AddListener(OnClear);
    }

    public void OnToast()
    {
        string path = "file:///C:/Working/RnD/UWP_test/Assets/Project/Resources/";
        new ToastGenerator()
            .SetImage(path + "img_hero.png", eTOAST_IMAGE.HERO)
            .SetImage(path + "img_logo.png", eTOAST_IMAGE.CIRCLE_LOGO)
            .SetText("TITLE", eTOAST_TEXT.TITLE)
            .SetText("text", eTOAST_TEXT.NORMAL)
            .SetImage(path + "img_inline.png", eTOAST_IMAGE.INLINE)
            .Generate();
    }

    public void OnTile()
    {
        string path = "file:///C:/Working/RnD/UWP_test/Assets/Project/Resources/";
        new TileGenerator()
            .SetSize(eTILE_SIZE.WIDE)
            .SetText("BASE", eTILE_TEXT.BASE)
            .SetText("caption", eTILE_TEXT.CAPTION)
            .SetImage(path + "img_inline.png", eTILE_IMAGE.CIRCLE)
            .SetImage(path + "img_hero.png", eTILE_IMAGE.BACKGROUND)
            .Generate();
    }

    public void OnBadge()
    {
        new BadgeGenerator().SetBadge(27).Generate();
    }

    public void OnClear()
    {
        NotificationClear.ClearAll();
    }
}
