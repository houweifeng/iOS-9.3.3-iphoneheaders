/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle {

	BOOL _isFromPhraseDictionary;
	BOOL _isFromTextChecker;
	unsigned _usageTrackingMask;
	unsigned long long _wordOriginFeedbackID;
	NSString* _label;

}

@property (assign,nonatomic) BOOL isFromPhraseDictionary;              //@synthesize isFromPhraseDictionary=_isFromPhraseDictionary - In the implementation block
@property (assign,nonatomic) BOOL isFromTextChecker;                   //@synthesize isFromTextChecker=_isFromTextChecker - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)usageTrackingMask;
-(unsigned long long)wordOriginFeedbackID;
-(BOOL)isAutocorrection;
-(BOOL)isFromPhraseDictionary;
-(BOOL)isFromTextChecker;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned)arg4 ;
-(void)setIsFromPhraseDictionary:(BOOL)arg1 ;
-(void)setIsFromTextChecker:(BOOL)arg1 ;
@end
