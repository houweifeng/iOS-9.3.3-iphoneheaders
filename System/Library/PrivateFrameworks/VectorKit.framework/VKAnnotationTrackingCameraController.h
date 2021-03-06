/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;
@class VKTimedAnimation;

@interface VKAnnotationTrackingCameraController : VKCameraController {

	id<VKTrackableAnnotation> _annotation;
	id<VKTrackableAnnotationPresentation> _annotationPresentation;
	VKTimedAnimation* _currentAnimation;
	VKPoint _currentAnimationStartPoint;
	VKPoint _currentAnimationStartCameraPosition;
	VKPoint _currentAnimationEndPoint;
	VKPoint _currentAnimationEndCameraPosition;
	double _pendingChangeDuration;
	VKTimedAnimation* _currentHeadingAnimation;
	double _pendingHeadingChangeDuration;
	float _headingAnimationCompletedAngle;
	long long _headingAnimationDisplayRate;
	VKEdgeInsets _edgeInsets;
	long long _zoomStyle;
	struct {
		unsigned hasPendingChange : 1;
		unsigned paused : 1;
		unsigned trackingHeading : 1;
		unsigned hasPendingHeadingChange : 1;
		unsigned isInitialRegionChange : 1;
		unsigned isJumpingToAnnotation : 1;
		unsigned annotationImplementsAccuracy : 1;
		unsigned annotationImplementsHeading : 1;
		unsigned annotationImplementsExpectedCoordinateUpdateInterval : 1;
		unsigned annotationImplementsExpectedHeadingUpdateInterval : 1;
	}  _flags;

}

@property (assign,nonatomic) VKEdgeInsets edgeInsets;                                      //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) long long zoomStyle;                                          //@synthesize zoomStyle=_zoomStyle - In the implementation block
@property (assign,nonatomic) long long headingAnimationDisplayRate;                        //@synthesize headingAnimationDisplayRate=_headingAnimationDisplayRate - In the implementation block
@property (nonatomic,readonly) id<VKTrackableAnnotation> annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
-(void)dealloc;
-(id)init;
-(VKEdgeInsets)edgeInsets;
-(BOOL)isAnimating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(id<VKTrackableAnnotation>)annotation;
-(BOOL)isTrackingHeading;
-(void)setHeadingAnimationDisplayRate:(long long)arg1 ;
-(void)setZoomStyle:(long long)arg1 ;
-(long long)headingAnimationDisplayRate;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(long long)zoomStyle;
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(void)updateFramerate;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setGesturing:(BOOL)arg1 ;
-(void)stopTrackingAnnotation;
-(void)pauseAnimation;
-(void)resumeAnimation;
@end

