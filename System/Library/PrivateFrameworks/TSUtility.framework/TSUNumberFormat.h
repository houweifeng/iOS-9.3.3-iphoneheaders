/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUNumberFormatting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet;

@interface TSUNumberFormat : NSObject <TSUNumberFormatting, NSCopying, NSMutableCopying> {

	int mValueType;
	NSString* mFormatString;
	unsigned short mDecimalPlaces;
	NSString* mCurrencyCode;
	BOOL mUseAccountingStyle;
	int mNegativeStyle;
	BOOL mShowThousandsSeparator;
	int mFractionAccuracy;
	BOOL mFormatStringRequiresSuppressionOfMinusSign;
	BOOL mUseScientificFormattingAutomatically;
	BOOL mIgnoreDecimalPlacesForZeroValue;
	NSString* mPrefixString;
	NSString* mSuffixString;
	unsigned char mBase;
	unsigned short mBasePlaces;
	BOOL mBaseUseMinusSign;
	BOOL mIsCustom;
	double mScaleFactor;
	BOOL mFormatStringContainsTabCharacter;
	BOOL mFormatContainsSpecialTokens;
	BOOL mFormatContainsIntegerToken;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	BOOL mRequiresFractionReplacement;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	unsigned short mIndexFromRightOfLastDigitPlaceholder;
	BOOL mIsTextFormat;
	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	NSString* mFormatName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(BOOL)arg11 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 scaleFactor:(double)arg9 isCustom:(BOOL)arg10 formatName:(id)arg11 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 formatName:(id)arg16 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 ;
-(id)fractionStringFromDouble:(double)arg1 ;
-(id)baseStringFromDouble:(double)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(BOOL)arg14 isCustom:(BOOL)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(BOOL)arg23 formatName:(id)arg24 ;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(BOOL)arg4 ;
-(id)stringFromDouble:(double)arg1 forceSuppressMinusSign:(BOOL)arg2 ;
-(id)numberFormatBySettingValueType:(int)arg1 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 ;
-(id)numberFormatByIncrementingDecimalPlaces:(short)arg1 ;
-(id)numberFormatBySettingCurrencyCode:(id)arg1 ;
-(id)numberFormatBySettingSuffixString:(id)arg1 ;
-(id)numberFormatBySettingShowThousandsSeparator:(BOOL)arg1 ;
-(id)numberFormatBySettingFractionAccuracy:(int)arg1 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2 ;
-(id)stringFromDouble:(double)arg1 ;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 ;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)chartLabelStringFromDouble:(double)arg1 ;
-(id)numberFormatBySettingPrefixString:(id)arg1 ;
-(id)numberFormatBySettingBase:(unsigned char)arg1 ;
-(id)numberFormatBySettingBasePlaces:(unsigned short)arg1 ;
-(id)numberFormatBySettingBaseRepresentNegativeWithMinus:(BOOL)arg1 ;
-(id)chartLabelStringNofixFromDouble:(double)arg1 ;
-(id)chartLabelStringFromDouble:(double)arg1 forceSuppressMinusSign:(BOOL)arg2 ;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(BOOL)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned short)base;
-(id)formatString;
-(id)currencyCode;
-(id)stringFromString:(id)arg1 ;
-(int)valueType;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(BOOL)arg11 ;
-(unsigned short)decimalPlaces;
-(BOOL)usesAccountingStyle;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)isCustom;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1 ;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(BOOL)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(BOOL)arg13 formatName:(id)arg14 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
-(id)numberFormatBySettingNegativeStyle:(int)arg1 ;
-(id)numberFormatBySettingUseAccountingStyle:(BOOL)arg1 ;
-(id)prefixString;
-(BOOL)useScientificFormattingAutomatically;
-(void)setUseScientificFormattingAutomatically:(BOOL)arg1 ;
-(BOOL)ignoreDecimalPlacesForZeroValue;
-(void)setIgnoreDecimalPlacesForZeroValue:(BOOL)arg1 ;
-(BOOL)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1 ;
@end

