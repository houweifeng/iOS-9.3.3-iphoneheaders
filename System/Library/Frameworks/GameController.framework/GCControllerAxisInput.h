/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerElement.h>

@class GCControllerButtonInput;

@interface GCControllerAxisInput : GCControllerElement

@property (nonatomic,copy) id valueChangedHandler; 
@property (nonatomic,readonly) float value; 
@property (nonatomic,readonly) GCControllerButtonInput * positive; 
@property (nonatomic,readonly) GCControllerButtonInput * negative; 
@property (getter=isFlipped,nonatomic,readonly) BOOL flipped; 
@property (getter=isDigital,nonatomic,readonly) BOOL digital; 
-(id)description;
-(float)value;
-(BOOL)_setValue:(float)arg1 ;
-(GCControllerButtonInput *)negative;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)isAnalog;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)valueChangedHandler;
-(void)setValueChangedHandler:(id)arg1 ;
-(BOOL)isDigital;
-(GCControllerButtonInput *)positive;
-(BOOL)isFlipped;
@end
