/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VKPShieldVariant : PBCodable <NSCopying> {

	SCD_Struct_VK409 _textShadow;
	SCD_Struct_VK411* _layers;
	unsigned long long _layersCount;
	unsigned long long _layersSpace;
	SCD_Struct_VK412 _textStroke;
	SCD_Struct_VK407 _fontColor;
	SCD_Struct_VK413* _centerPoints;
	unsigned _atlasIndex;
	unsigned _backgroundColor;
	unsigned _borderColor;
	float _capWidthLeft;
	float _capWidthRight;
	float _centerOffsetX;
	NSString* _fontName;
	float _fontSize;
	unsigned _maxDigits;
	unsigned _minDigits;
	NSString* _nonDigitFontName;
	float _nonDigitFontSize;
	float _paddingLeft;
	float _paddingRight;
	unsigned _quadIndex;
	float _textBaseline;
	int _textMaskColor;
	SCD_Struct_VK414 _has;

}

@property (assign,nonatomic) BOOL hasAtlasIndex; 
@property (assign,nonatomic) unsigned atlasIndex;                                 //@synthesize atlasIndex=_atlasIndex - In the implementation block
@property (assign,nonatomic) BOOL hasQuadIndex; 
@property (assign,nonatomic) unsigned quadIndex;                                  //@synthesize quadIndex=_quadIndex - In the implementation block
@property (assign,nonatomic) BOOL hasMinDigits; 
@property (assign,nonatomic) unsigned minDigits;                                  //@synthesize minDigits=_minDigits - In the implementation block
@property (assign,nonatomic) BOOL hasMaxDigits; 
@property (assign,nonatomic) unsigned maxDigits;                                  //@synthesize maxDigits=_maxDigits - In the implementation block
@property (assign,nonatomic) BOOL hasTextBaseline; 
@property (assign,nonatomic) float textBaseline;                                  //@synthesize textBaseline=_textBaseline - In the implementation block
@property (assign,nonatomic) BOOL hasCenterOffsetX; 
@property (assign,nonatomic) float centerOffsetX;                                 //@synthesize centerOffsetX=_centerOffsetX - In the implementation block
@property (nonatomic,readonly) BOOL hasFontName; 
@property (nonatomic,retain) NSString * fontName;                                 //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) BOOL hasFontSize; 
@property (assign,nonatomic) float fontSize;                                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL hasFontColor; 
@property (assign,nonatomic) SCD_Struct_VK407 fontColor;                          //@synthesize fontColor=_fontColor - In the implementation block
@property (assign,nonatomic) BOOL hasTextStroke; 
@property (assign,nonatomic) SCD_Struct_VK415 textStroke;                         //@synthesize textStroke=_textStroke - In the implementation block
@property (assign,nonatomic) BOOL hasTextShadow; 
@property (assign,nonatomic) SCD_Struct_VK416 textShadow;                         //@synthesize textShadow=_textShadow - In the implementation block
@property (nonatomic,readonly) BOOL hasNonDigitFontName; 
@property (nonatomic,retain) NSString * nonDigitFontName;                         //@synthesize nonDigitFontName=_nonDigitFontName - In the implementation block
@property (assign,nonatomic) BOOL hasNonDigitFontSize; 
@property (assign,nonatomic) float nonDigitFontSize;                              //@synthesize nonDigitFontSize=_nonDigitFontSize - In the implementation block
@property (nonatomic,readonly) unsigned long long centerPointsCount; 
@property (nonatomic,readonly) float* centerPoints; 
@property (nonatomic,readonly) unsigned long long layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK411* layers; 
@property (assign,nonatomic) BOOL hasBackgroundColor; 
@property (assign,nonatomic) unsigned backgroundColor;                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) BOOL hasBorderColor; 
@property (assign,nonatomic) unsigned borderColor;                                //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) BOOL hasCapWidthLeft; 
@property (assign,nonatomic) float capWidthLeft;                                  //@synthesize capWidthLeft=_capWidthLeft - In the implementation block
@property (assign,nonatomic) BOOL hasCapWidthRight; 
@property (assign,nonatomic) float capWidthRight;                                 //@synthesize capWidthRight=_capWidthRight - In the implementation block
@property (assign,nonatomic) BOOL hasPaddingLeft; 
@property (assign,nonatomic) float paddingLeft;                                   //@synthesize paddingLeft=_paddingLeft - In the implementation block
@property (assign,nonatomic) BOOL hasPaddingRight; 
@property (assign,nonatomic) float paddingRight;                                  //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) BOOL hasTextMaskColor; 
@property (assign,nonatomic) int textMaskColor;                                   //@synthesize textMaskColor=_textMaskColor - In the implementation block
-(Matrix<float, 4, 1>)_colorForMaskColor:(int)arg1 colors:(SCD_Struct_VK82*)arg2 ;
-(CGImageRef)newImageWithTextureAtlases:(id)arg1 atlasToImageCache:(id)arg2 atlasToImageCacheLock:(id)arg3 contentScale:(double)arg4 colors:(SCD_Struct_VK82*)arg5 ;
-(void)setBackgroundColor:(unsigned)arg1 ;
-(unsigned)backgroundColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_VK411*)layers;
-(void)setBorderColor:(unsigned)arg1 ;
-(NSString *)fontName;
-(void)setFontSize:(float)arg1 ;
-(unsigned)borderColor;
-(id)dictionaryRepresentation;
-(void)setFontName:(NSString *)arg1 ;
-(void)setPaddingLeft:(float)arg1 ;
-(void)setPaddingRight:(float)arg1 ;
-(float)paddingLeft;
-(float)paddingRight;
-(float)fontSize;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)centerPointsCount;
-(NSString *)nonDigitFontName;
-(BOOL)hasPaddingRight;
-(unsigned)maxDigits;
-(BOOL)hasCapWidthRight;
-(int)textMaskColor;
-(unsigned)minDigits;
-(float)centerPointAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTextStroke;
-(BOOL)hasFontName;
-(float)capWidthLeft;
-(float)textBaseline;
-(unsigned)quadIndex;
-(BOOL)hasTextShadow;
-(SCD_Struct_VK415)textStroke;
-(float)capWidthRight;
-(float)centerOffsetX;
-(unsigned)atlasIndex;
-(BOOL)hasFontColor;
-(SCD_Struct_VK411)layerAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNonDigitFontName;
-(float)nonDigitFontSize;
-(unsigned long long)layersCount;
-(BOOL)hasCapWidthLeft;
-(BOOL)hasNonDigitFontSize;
-(BOOL)hasTextMaskColor;
-(BOOL)hasPaddingLeft;
-(void)setQuadIndex:(unsigned)arg1 ;
-(void)setAtlasIndex:(unsigned)arg1 ;
-(void)addLayer:(SCD_Struct_VK411)arg1 ;
-(void)setHasQuadIndex:(BOOL)arg1 ;
-(void)setHasTextStroke:(BOOL)arg1 ;
-(void)setNonDigitFontSize:(float)arg1 ;
-(BOOL)hasQuadIndex;
-(void)setCenterOffsetX:(float)arg1 ;
-(BOOL)hasBackgroundColor;
-(void)setTextShadow:(SCD_Struct_VK416)arg1 ;
-(void)setCenterPoints:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasBorderColor:(BOOL)arg1 ;
-(void)setHasPaddingRight:(BOOL)arg1 ;
-(void)setNonDigitFontName:(NSString *)arg1 ;
-(void)setTextStroke:(SCD_Struct_VK415)arg1 ;
-(BOOL)hasTextBaseline;
-(BOOL)hasAtlasIndex;
-(void)setHasTextShadow:(BOOL)arg1 ;
-(void)setHasTextBaseline:(BOOL)arg1 ;
-(void)setCapWidthLeft:(float)arg1 ;
-(BOOL)hasBorderColor;
-(void)setHasFontColor:(BOOL)arg1 ;
-(void)setTextBaseline:(float)arg1 ;
-(void)setHasCapWidthLeft:(BOOL)arg1 ;
-(void)setTextMaskColor:(int)arg1 ;
-(void)setHasAtlasIndex:(BOOL)arg1 ;
-(void)setCapWidthRight:(float)arg1 ;
-(BOOL)hasMaxDigits;
-(void)setHasTextMaskColor:(BOOL)arg1 ;
-(void)setHasMaxDigits:(BOOL)arg1 ;
-(BOOL)hasFontSize;
-(void)setMaxDigits:(unsigned)arg1 ;
-(void)setHasCapWidthRight:(BOOL)arg1 ;
-(void)setHasNonDigitFontSize:(BOOL)arg1 ;
-(void)setHasFontSize:(BOOL)arg1 ;
-(void)addCenterPoint:(float)arg1 ;
-(void)clearLayers;
-(void)setLayers:(SCD_Struct_VK411*)arg1 count:(unsigned long long)arg2 ;
-(void)clearCenterPoints;
-(BOOL)hasMinDigits;
-(void)setHasMinDigits:(BOOL)arg1 ;
-(void)setMinDigits:(unsigned)arg1 ;
-(void)setHasPaddingLeft:(BOOL)arg1 ;
-(float*)centerPoints;
-(BOOL)hasCenterOffsetX;
-(void)setHasCenterOffsetX:(BOOL)arg1 ;
-(void)setHasBackgroundColor:(BOOL)arg1 ;
-(SCD_Struct_VK416)textShadow;
-(SCD_Struct_VK407)fontColor;
-(void)setFontColor:(SCD_Struct_VK407)arg1 ;
@end

