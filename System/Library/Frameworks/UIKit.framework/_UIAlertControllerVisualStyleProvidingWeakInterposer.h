/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertControllerVisualStyleProviding.h>

@protocol UIAlertControllerVisualStyleProviding;
@class NSString;

@interface _UIAlertControllerVisualStyleProvidingWeakInterposer : NSObject <UIAlertControllerVisualStyleProviding> {

	id<UIAlertControllerVisualStyleProviding> _weakProvider;

}

@property (assign,nonatomic,__weak) id<UIAlertControllerVisualStyleProviding> weakProvider;              //@synthesize weakProvider=_weakProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3 ;
-(void)setWeakProvider:(id<UIAlertControllerVisualStyleProviding>)arg1 ;
-(id<UIAlertControllerVisualStyleProviding>)weakProvider;
-(id)initWithVisualStyleProvider:(id)arg1 ;
@end

