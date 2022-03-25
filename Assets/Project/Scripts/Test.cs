using System.Collections;
using System.Collections.Generic;
using UnityEngine;



public class Test : MonoBehaviour
{
    public void OnClick()
    {
#if ENABLE_WINMD_SUPPORT
        DLL.ToastLibrary.ToastGenerator generator = new DLL.ToastLibrary.ToastGenerator();
        generator.ShowToast();
#endif
    }
}