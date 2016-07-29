/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	NSData* _rawData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long long _rowbytes;
	BOOL _allowsMultiPassEncoding;
	unsigned _imageAlpha;
	double _compressionQuality;
	BOOL _useBlurredImageEncoding;

}

@property (assign,nonatomic) unsigned pixelFormat;                   //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) BOOL allowsMultiPassEncoding;                     //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
@property (assign,nonatomic) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
@property (assign) BOOL useBlurredImageEncoding;                     //@synthesize useBlurredImageEncoding=_useBlurredImageEncoding - In the implementation block
-(double)compressionQuality;
-(void)setCompressionQuality:(double)arg1 ;
-(BOOL)useBlurredImageEncoding;
-(void)setUseBlurredImageEncoding:(BOOL)arg1 ;
-(id)compressedData:(BOOL)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(BOOL)allowsMultiPassEncoding;
-(unsigned)sourceAlphaInfo;
-(unsigned long long)rowbytes;
-(void)setAllowsMultiPassEncoding:(BOOL)arg1 ;
-(id)pixelData;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setPixelData:(id)arg1 ;
-(void)dealloc;
-(unsigned)width;
-(unsigned)height;
-(CGContextRef)bitmapContext;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(void)finalize;
@end
