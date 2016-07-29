/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString;

@interface SXVideoComponent : SXComponent

@property (nonatomic,readonly) NSString * stillImageIdentifier; 
@property (nonatomic,readonly) NSString * resourceIdentifier; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
@property (nonatomic,readonly) BOOL enablePreroll; 
+(id)typeString;
-(BOOL)enablePreroll;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(double)aspectRatio;
-(NSString *)resourceIdentifier;
-(NSString *)stillImageIdentifier;
-(Class)componentViewClass;
-(double)aspectRatioWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)enablePrerollWithValue:(id)arg1 withType:(int)arg2 ;
@end
