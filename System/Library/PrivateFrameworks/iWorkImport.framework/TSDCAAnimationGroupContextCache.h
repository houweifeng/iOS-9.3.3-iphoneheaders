/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSDCAAnimationContextCache.h>

@class NSArray;

@interface TSDCAAnimationGroupContextCache : TSDCAAnimationContextCache {

	NSArray* _animations;
	NSArray* _animationContextCaches;

}

@property (nonatomic,readonly) NSArray * animations;                          //@synthesize animations=_animations - In the implementation block
@property (nonatomic,readonly) NSArray * animationContextCaches;              //@synthesize animationContextCaches=_animationContextCaches - In the implementation block
-(id)initWithAnimation:(id)arg1 ;
-(void)verifyCacheWithAnimation:(id)arg1 ;
-(NSArray *)animationContextCaches;
-(void)dealloc;
-(NSArray *)animations;
@end
