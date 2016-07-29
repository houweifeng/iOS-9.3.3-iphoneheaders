/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBuffer;
@interface MDLSubmeshTopology : NSObject {

	id<MDLMeshBuffer> _faceTopology;
	unsigned long long _faceCount;
	id<MDLMeshBuffer> _vertexCreaseIndices;
	id<MDLMeshBuffer> _vertexCreases;
	unsigned long long _vertexCreaseCount;
	id<MDLMeshBuffer> _edgeCreaseIndices;
	id<MDLMeshBuffer> _edgeCreases;
	unsigned long long _edgeCreaseCount;
	id<MDLMeshBuffer> _holes;
	unsigned long long _holeCount;

}

@property (nonatomic,retain) id<MDLMeshBuffer> faceTopology;                     //@synthesize faceTopology=_faceTopology - In the implementation block
@property (assign,nonatomic) unsigned long long faceCount;                       //@synthesize faceCount=_faceCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> vertexCreaseIndices;              //@synthesize vertexCreaseIndices=_vertexCreaseIndices - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> vertexCreases;                    //@synthesize vertexCreases=_vertexCreases - In the implementation block
@property (assign,nonatomic) unsigned long long vertexCreaseCount;               //@synthesize vertexCreaseCount=_vertexCreaseCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> edgeCreaseIndices;                //@synthesize edgeCreaseIndices=_edgeCreaseIndices - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> edgeCreases;                      //@synthesize edgeCreases=_edgeCreases - In the implementation block
@property (assign,nonatomic) unsigned long long edgeCreaseCount;                 //@synthesize edgeCreaseCount=_edgeCreaseCount - In the implementation block
@property (nonatomic,retain) id<MDLMeshBuffer> holes;                            //@synthesize holes=_holes - In the implementation block
@property (assign,nonatomic) unsigned long long holeCount;                       //@synthesize holeCount=_holeCount - In the implementation block
-(unsigned long long)faceCount;
-(id<MDLMeshBuffer>)faceTopology;
-(void)setFaceTopology:(id<MDLMeshBuffer>)arg1 ;
-(void)setFaceCount:(unsigned long long)arg1 ;
-(id<MDLMeshBuffer>)vertexCreaseIndices;
-(void)setVertexCreaseIndices:(id<MDLMeshBuffer>)arg1 ;
-(id<MDLMeshBuffer>)vertexCreases;
-(void)setVertexCreases:(id<MDLMeshBuffer>)arg1 ;
-(unsigned long long)vertexCreaseCount;
-(void)setVertexCreaseCount:(unsigned long long)arg1 ;
-(id<MDLMeshBuffer>)edgeCreaseIndices;
-(void)setEdgeCreaseIndices:(id<MDLMeshBuffer>)arg1 ;
-(id<MDLMeshBuffer>)edgeCreases;
-(void)setEdgeCreases:(id<MDLMeshBuffer>)arg1 ;
-(unsigned long long)edgeCreaseCount;
-(void)setEdgeCreaseCount:(unsigned long long)arg1 ;
-(id<MDLMeshBuffer>)holes;
-(void)setHoles:(id<MDLMeshBuffer>)arg1 ;
-(unsigned long long)holeCount;
-(void)setHoleCount:(unsigned long long)arg1 ;
@end
