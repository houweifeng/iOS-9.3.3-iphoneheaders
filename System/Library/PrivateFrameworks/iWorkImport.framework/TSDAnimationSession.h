/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDAnimationSession <NSObject>
@property (assign,nonatomic) BOOL shouldDrawTexturesAsynchronously; 
@property (assign,nonatomic) BOOL shouldUseSourceImage; 
@required
-(BOOL)shouldUseSourceImage;
-(double)showScale;
-(BOOL)isOffscreenPlayback;
-(BOOL)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(BOOL)arg1;
-(void)setShouldUseSourceImage:(BOOL)arg1;

@end
