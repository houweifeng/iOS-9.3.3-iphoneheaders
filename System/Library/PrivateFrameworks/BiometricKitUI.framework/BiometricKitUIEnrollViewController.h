/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <BiometricKitUI/BiometricKitDelegate.h>

@protocol BiometricKitUIEnrollResultDelegate;
@class NSMutableDictionary, BiometricKit, NSString;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {

	NSMutableDictionary* _properties;
	BiometricKit* _biometricKit;
	id<BiometricKitUIEnrollResultDelegate> _delegate;

}

@property (nonatomic,retain) BiometricKit * biometricKit;                                  //@synthesize biometricKit=_biometricKit - In the implementation block
@property (assign,nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<BiometricKitUIEnrollResultDelegate>)arg1 ;
-(id<BiometricKitUIEnrollResultDelegate>)delegate;
-(BiometricKit *)biometricKit;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
-(void)restartEnroll;
@end
