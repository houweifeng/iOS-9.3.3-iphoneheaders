/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSEditableTableCell.h>

@class NSString;

@interface PHSettingsNumberCell : PSEditableTableCell {

	NSString* _previouslySavedValue;

}

@property (retain) NSString * previouslySavedValue;              //@synthesize previouslySavedValue=_previouslySavedValue - In the implementation block
-(void)dealloc;
-(void)endEditingAndSave;
-(NSString *)previouslySavedValue;
-(BOOL)_valueDifferentFromPreviouslySavedValue;
-(void)setPreviouslySavedValue:(NSString *)arg1 ;
-(void)saveNumberValue;
@end

