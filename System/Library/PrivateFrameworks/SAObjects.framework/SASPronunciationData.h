/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSLocale, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * apgId; 
@property (nonatomic,copy) NSLocale * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (assign,nonatomic) long long tokenOffset; 
@property (nonatomic,copy) NSArray * ttsPronunciations; 
@property (nonatomic,copy) NSString * ttsVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationData;
+(id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)orthography;
-(NSLocale *)language;
-(void)setLanguage:(NSLocale *)arg1 ;
-(id)groupIdentifier;
-(NSString *)apgId;
-(void)setApgId:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(long long)tokenOffset;
-(void)setTokenOffset:(long long)arg1 ;
-(NSArray *)ttsPronunciations;
-(void)setTtsPronunciations:(NSArray *)arg1 ;
-(NSString *)ttsVersion;
-(void)setTtsVersion:(NSString *)arg1 ;
-(id)encodedClassName;
@end

