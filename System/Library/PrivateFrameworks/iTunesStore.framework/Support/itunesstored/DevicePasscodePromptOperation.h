/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISDialog;

@interface DevicePasscodePromptOperation : ISOperation {

	ISDialog* _dialog;
	/*^block*/id _tokenBlock;

}

@property (copy) id tokenBlock; 
-(void)setTokenBlock:(id)arg1 ;
-(id)tokenBlock;
-(void)dealloc;
-(void)run;
-(long long)_keyboardType;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
@end
