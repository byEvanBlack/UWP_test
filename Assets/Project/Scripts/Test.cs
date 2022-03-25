using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DLL.ToastLibrary;



public class Test : MonoBehaviour
{
    public void OnClick()
    {
#if ENABLE_WINMD_SUPPORT
        ToastGenerator generator = new ToastGenerator();
        generator.ShowToast();
#else
        ToastGenerator generator = new ToastGenerator();
        generator.ShowToast();
#endif
    }
}
