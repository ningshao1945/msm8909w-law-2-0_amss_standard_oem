/*
 * Copyright (c) 2013 Qualcomm Technologies, Inc.  All Rights Reserved.
 * Qualcomm Technologies Proprietary and Confidential.
 */

package com.quicinc.cne.settings;

import android.app.Activity;
import android.content.Context;
import android.preference.PreferenceScreen;

import com.quicinc.cne.settings.BasePreferenceFragment;
import com.quicinc.cne.settings.controllers.BaseController;
import com.quicinc.cne.settings.controllers.WQEController;

public class WQEPreferenceFragment extends BasePreferenceFragment {
    protected BaseController getController(Context context, PreferenceScreen preferencesScreen){
        return (new WQEController(context, preferencesScreen));
    }

    protected int getPreferencesResId(){
        return R.xml.preference_wqe;
    }
}
