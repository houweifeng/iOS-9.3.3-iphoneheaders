/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSArray, NSString, CAMediaTimingFunction;

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	BOOL _removedOnCompletion;
	NSArray* _allowedKeyPaths;
	NSString* _fillMode;
	double _timeOffset;
	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,copy) NSArray * allowedKeyPaths;                                            //@synthesize allowedKeyPaths=_allowedKeyPaths - In the implementation block
@property (nonatomic,copy) NSString * fillMode;                                                  //@synthesize fillMode=_fillMode - In the implementation block
@property (assign,getter=isRemovedOnCompletion,nonatomic) BOOL removedOnCompletion;              //@synthesize removedOnCompletion=_removedOnCompletion - In the implementation block
@property (assign,nonatomic) double timeOffset;                                                  //@synthesize timeOffset=_timeOffset - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;                             //@synthesize timingFunction=_timingFunction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(CAMediaTimingFunction *)timingFunction;
-(double)timeOffset;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFillMode:(NSString *)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setRemovedOnCompletion:(BOOL)arg1 ;
-(NSString *)fillMode;
-(NSArray *)allowedKeyPaths;
-(void)setAllowedKeyPaths:(NSArray *)arg1 ;
-(BOOL)isRemovedOnCompletion;
@end

