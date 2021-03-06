/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol AXOratorDelegate;
@class AVSpeechUtterance, AXLanguageTaggedContent, NSString, NSArray, AVSpeechSynthesizer, NSMutableArray, AXLanguageTag;

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechUtterance* _statusUtterance;
	BOOL _contentIsSpeakable;
	BOOL _shouldSpeakNextItemOnResume;
	BOOL _isAudioSessionActive;
	BOOL _isInAudioInterruption;
	BOOL _wasSpeakingBeforeAudioInterruption;
	BOOL _didRequestStartSpeakingDuringAudioInterruption;
	BOOL _didRequestPauseSpeakingDuringAudioInterruption;
	BOOL _didRequestResumeSpeakingDuringAudioInterruption;
	id<AXOratorDelegate> _delegate;
	long long _speakingContext;
	AXLanguageTaggedContent* _selectedContent;
	NSString* _voiceIdentifier;
	AXLanguageTaggedContent* _speakingContent;
	NSArray* _speakingContentTokenRanges;
	unsigned long long _numberOfTokensToSkip;
	AVSpeechSynthesizer* _speechSynthesizer;
	NSMutableArray* _speechSequenceItems;
	NSString* _lastUtteranceLanguageCode;
	AVSpeechUtterance* _lastUtterance;
	AXLanguageTag* _lastUtteranceLanguageTag;
	NSString* _requestedLanguageCodeDuringAudioInterruption;
	NSRange _lastSpokenSubstringRange;
	NSRange _lastUtteranceSubstringRange;

}

@property (assign,nonatomic) id<AXOratorDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) NSRange lastSpokenSubstringRange;                                   //@synthesize lastSpokenSubstringRange=_lastSpokenSubstringRange - In the implementation block
@property (assign,nonatomic) long long speakingContext;                                          //@synthesize speakingContext=_speakingContext - In the implementation block
@property (nonatomic,retain) AXLanguageTaggedContent * selectedContent;                          //@synthesize selectedContent=_selectedContent - In the implementation block
@property (nonatomic,retain) NSString * voiceIdentifier;                                         //@synthesize voiceIdentifier=_voiceIdentifier - In the implementation block
@property (nonatomic,retain) AXLanguageTaggedContent * speakingContent;                          //@synthesize speakingContent=_speakingContent - In the implementation block
@property (nonatomic,retain) NSArray * speakingContentTokenRanges;                               //@synthesize speakingContentTokenRanges=_speakingContentTokenRanges - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTokensToSkip;                            //@synthesize numberOfTokensToSkip=_numberOfTokensToSkip - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * speechSynthesizer;                            //@synthesize speechSynthesizer=_speechSynthesizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * speechSequenceItems;                               //@synthesize speechSequenceItems=_speechSequenceItems - In the implementation block
@property (nonatomic,retain) NSString * lastUtteranceLanguageCode;                               //@synthesize lastUtteranceLanguageCode=_lastUtteranceLanguageCode - In the implementation block
@property (assign,nonatomic) NSRange lastUtteranceSubstringRange;                                //@synthesize lastUtteranceSubstringRange=_lastUtteranceSubstringRange - In the implementation block
@property (nonatomic,retain) AVSpeechUtterance * lastUtterance;                                  //@synthesize lastUtterance=_lastUtterance - In the implementation block
@property (nonatomic,retain) AXLanguageTag * lastUtteranceLanguageTag;                           //@synthesize lastUtteranceLanguageTag=_lastUtteranceLanguageTag - In the implementation block
@property (assign,nonatomic) BOOL shouldSpeakNextItemOnResume;                                   //@synthesize shouldSpeakNextItemOnResume=_shouldSpeakNextItemOnResume - In the implementation block
@property (assign,nonatomic) BOOL isAudioSessionActive;                                          //@synthesize isAudioSessionActive=_isAudioSessionActive - In the implementation block
@property (assign,nonatomic) BOOL isInAudioInterruption;                                         //@synthesize isInAudioInterruption=_isInAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL wasSpeakingBeforeAudioInterruption;                            //@synthesize wasSpeakingBeforeAudioInterruption=_wasSpeakingBeforeAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestStartSpeakingDuringAudioInterruption;                //@synthesize didRequestStartSpeakingDuringAudioInterruption=_didRequestStartSpeakingDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestPauseSpeakingDuringAudioInterruption;                //@synthesize didRequestPauseSpeakingDuringAudioInterruption=_didRequestPauseSpeakingDuringAudioInterruption - In the implementation block
@property (assign,nonatomic) BOOL didRequestResumeSpeakingDuringAudioInterruption;               //@synthesize didRequestResumeSpeakingDuringAudioInterruption=_didRequestResumeSpeakingDuringAudioInterruption - In the implementation block
@property (nonatomic,copy) NSString * requestedLanguageCodeDuringAudioInterruption;              //@synthesize requestedLanguageCodeDuringAudioInterruption=_requestedLanguageCodeDuringAudioInterruption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)stopSpeaking:(id*)arg1 ;
-(void)setDelegate:(id<AXOratorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXOratorDelegate>)delegate;
-(NSString *)content;
-(BOOL)speakSlower;
-(BOOL)speakFaster;
-(void)setContent:(NSString *)arg1 ;
-(void)setLastUtteranceSubstringRange:(NSRange)arg1 ;
-(void)setLastSpokenSubstringRange:(NSRange)arg1 ;
-(void)setSpeakingContext:(long long)arg1 ;
-(void)_handleAudioInterruption:(id)arg1 ;
-(void)_handleMediaServicesWereLost:(id)arg1 ;
-(void)_handleMediaServicesWereReset:(id)arg1 ;
-(void)_respeakUtteranceIfNeeded;
-(AXLanguageTaggedContent *)selectedContent;
-(void)setSelectedContent:(AXLanguageTaggedContent *)arg1 ;
-(BOOL)_canSpeakTaggedContent:(id)arg1 ;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg1 alternativeVoiceId:(id)arg2 delayBeforeStart:(double)arg3 error:(id*)arg4 ;
-(BOOL)isInAudioInterruption;
-(void)setDidRequestStartSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestPauseSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setDidRequestResumeSpeakingDuringAudioInterruption:(BOOL)arg1 ;
-(void)setRequestedLanguageCodeDuringAudioInterruption:(NSString *)arg1 ;
-(AVSpeechSynthesizer *)speechSynthesizer;
-(void)setSpeechSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(void)_updateAudioSessionCategory;
-(void)setVoiceIdentifier:(NSString *)arg1 ;
-(void)_startSpeakingSequence;
-(AXLanguageTaggedContent *)speakingContent;
-(BOOL)wasSpeakingBeforeAudioInterruption;
-(BOOL)isSpeaking;
-(BOOL)_successWithCode:(long long)arg1 error:(id*)arg2 ;
-(AVSpeechUtterance *)lastUtterance;
-(void)_clearAllContentState;
-(void)setLastUtterance:(AVSpeechUtterance *)arg1 ;
-(BOOL)resumeSpeakingAfterDelay:(double)arg1 error:(id*)arg2 ;
-(BOOL)shouldSpeakNextItemOnResume;
-(void)setShouldSpeakNextItemOnResume:(BOOL)arg1 ;
-(void)_speakNextItemInSequence;
-(BOOL)_changeSpeakingSpeed:(BOOL)arg1 ;
-(BOOL)_skipByUnit:(BOOL)arg1 boundary:(unsigned long long)arg2 ;
-(void)setSpeakingContent:(AXLanguageTaggedContent *)arg1 ;
-(void)setSpeakingContentTokenRanges:(NSArray *)arg1 ;
-(void)setSpeechSequenceItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)speechSequenceItems;
-(NSString *)voiceIdentifier;
-(void)_setAudioSessionActive:(BOOL)arg1 ;
-(void)setLastUtteranceLanguageCode:(NSString *)arg1 ;
-(void)setLastUtteranceLanguageTag:(AXLanguageTag *)arg1 ;
-(NSString *)lastUtteranceLanguageCode;
-(NSRange)lastSpokenSubstringRange;
-(AXLanguageTag *)lastUtteranceLanguageTag;
-(NSRange)lastUtteranceSubstringRange;
-(NSArray *)speakingContentTokenRanges;
-(unsigned long long)numberOfTokensToSkip;
-(id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1 ;
-(void)_tokenizeContentIfNeeded;
-(long long)_currentTokenIndex:(BOOL)arg1 ;
-(void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(BOOL)arg2 boundary:(unsigned long long)arg3 ;
-(void)setNumberOfTokensToSkip:(unsigned long long)arg1 ;
-(void)setWasSpeakingBeforeAudioInterruption:(BOOL)arg1 ;
-(BOOL)pauseSpeaking:(id*)arg1 ;
-(void)setIsInAudioInterruption:(BOOL)arg1 ;
-(BOOL)didRequestStartSpeakingDuringAudioInterruption;
-(NSString *)requestedLanguageCodeDuringAudioInterruption;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg1 alternativeVoiceId:(id)arg2 error:(id*)arg3 ;
-(BOOL)didRequestPauseSpeakingDuringAudioInterruption;
-(BOOL)didRequestResumeSpeakingDuringAudioInterruption;
-(BOOL)resumeSpeaking:(id*)arg1 ;
-(BOOL)isAudioSessionActive;
-(void)setIsAudioSessionActive:(BOOL)arg1 ;
-(long long)speakingContext;
-(void)_didBeginInterruption;
-(void)_didEndInterruption;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
-(float)speechRate;
-(BOOL)fastForwardWithBoundary:(unsigned long long)arg1 ;
-(BOOL)rewindWithBoundary:(unsigned long long)arg1 ;
-(void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2 useCompactVoice:(BOOL)arg3 alternateIdentifier:(id)arg4 ;
-(BOOL)contentIsSpeakable;
-(BOOL)canResumeWithContent:(id)arg1 ;
-(void)clearSelectedContent;
-(BOOL)isPaused;
@end

