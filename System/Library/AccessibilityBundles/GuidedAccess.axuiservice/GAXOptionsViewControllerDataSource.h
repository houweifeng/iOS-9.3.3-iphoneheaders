/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXOptionsViewControllerDataSource <NSObject>
@optional
-(id)optionsViewController:(id)arg1 textForFeatureAtIndex:(unsigned long long)arg2;
-(id)optionsViewController:(id)arg1 detailTextForFeatureAtIndex:(unsigned long long)arg2;
-(BOOL)optionsViewController:(id)arg1 stateForForFeatureAtIndex:(unsigned long long)arg2;
-(long long)timeRestrictionDurationForAppWithOptionsViewController:(id)arg1;
-(BOOL)timeRestrictiosEnabledForAppWithOptionsViewController:(id)arg1;

@required
-(unsigned long long)numberOfFeaturesInOptionsViewController:(id)arg1;

@end
