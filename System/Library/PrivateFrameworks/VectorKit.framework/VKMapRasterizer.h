/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>

@class VKScene, NSMutableSet, VKLayoutContext, MDTextureCanvas, VKTileProvider, VKMapRasterizerRoot, VKCamera, VKMapModel;

@interface VKMapRasterizer : VKModelObject {

	VKTileKey _keyToRasterize;
	VKScene* _rasterizeScene;
	NSMutableSet* _rasterizeTilesToRender;
	VKLayoutContext* _rasterizeLayoutContext;
	MDTextureCanvas* _rasterizeCanvas;
	VKTileProvider* _tileProvider;
	Matrix<float, 4, 1> _backgroundColor;
	unsigned long long _rasterizingScaleFactor;
	VKMapRasterizerRoot* _root;
	VKCamera* _rasterizeCamera;
	unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> >* _textureBuffer;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _depthStencilBuffer;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _renderToTextureTarget;
	unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> >* _rttQueue;
	unique_ptr<ggl::TexturePool, std::__1::default_delete<ggl::TexturePool> >* _texturePool;
	shared_ptr<ggl::Texture2D>* _renderTexture;
	unsigned _canvasPointSize;
	VKMapModel* _mapModel;

}

@property (nonatomic,readonly) const VKTileKey* keyToRasterize; 
@property (assign,nonatomic) VKMapModel * mapModel;                                  //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) VKTileProvider * tileProvider;                          //@synthesize tileProvider=_tileProvider - In the implementation block
@property (assign,nonatomic) Matrix<float backgroundColor;                           //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long rasterizingScaleFactor;              //@synthesize rasterizingScaleFactor=_rasterizingScaleFactor - In the implementation block
-(void)setBackgroundColor:(Matrix<float)arg1 ;
-(Matrix<float)backgroundColor;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)addSubmodel:(id)arg1 ;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(void)gglLayoutSceneIfNeeded:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(VKTileProvider *)tileProvider;
-(void)setTileProvider:(VKTileProvider *)arg1 ;
-(void)stylesheetDidChange;
-(void)setRasterizingScaleFactor:(unsigned long long)arg1 ;
-(VKMapModel *)mapModel;
-(void)flushTextureCache;
-(void)rasterizeKey:(const VKTileKey*)arg1 scene:(id)arg2 ;
-(void)createRasterizationLayoutContext:(id)arg1 canvasPointSize:(unsigned)arg2 ;
-(void)updateCameraFromKey:(const VKTileKey*)arg1 ;
-(void)prepRenderTargetWithTexture:(const shared_ptr<ggl::Texture2D>*)arg1 ;
-(const VKTileKey*)keyToRasterize;
-(unsigned long long)rasterizingScaleFactor;
-(BOOL)isBusy;
@end

