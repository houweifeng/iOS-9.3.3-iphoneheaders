/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconIndexNode.h>

@class NSHashTable, UIImage, NSString;

@interface SBIcon : NSObject <SBIconIndexNode> {

	NSHashTable* _observers;
	id _badgeNumberOrString;
	unsigned _uninstalled : 1;
	UIImage* _cachedIconImages[14];

}

@property (nonatomic,readonly) BOOL shouldWarmUp; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)memoryMappedIconImageForIconImage:(id)arg1 ;
+(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(double)arg2 withDrawing:(/*^block*/id)arg3 ;
+(id)_iconImagesMemoryPool;
+(id)_iconImageOfSize:(CGSize)arg1 scale:(double)arg2 failGracefully:(BOOL)arg3 drawing:(/*^block*/id)arg4 ;
-(BOOL)isEmptyPlaceholder;
-(BOOL)isGrabbedIconPlaceholder;
-(BOOL)isPlaceholder;
-(void)_notifyAccessoriesDidUpdate;
-(void)_notifyImageDidUpdate;
-(void)_notifyLaunchEnabledDidChange;
-(Class)iconImageViewClassForLocation:(int)arg1 ;
-(id)leafIdentifier;
-(BOOL)isLeafIcon;
-(id)applicationBundleID;
-(BOOL)isFolderIcon;
-(BOOL)hasFolderIconView;
-(id)folder;
-(BOOL)isDownloadingIcon;
-(id)appPlaceholder;
-(BOOL)isBookmarkIcon;
-(BOOL)isApplicationIcon;
-(id)application;
-(void)launchFromLocation:(int)arg1 context:(id)arg2 ;
-(id)getCachedIconImage:(int)arg1 ;
-(BOOL)shouldCacheImageForFormat:(int)arg1 ;
-(id)folderTitleOptions;
-(id)displayNameForLocation:(int)arg1 ;
-(id)uninstallAlertTitle;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertCancelTitle;
-(id)generateIconImage:(int)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(id)automationID;
-(id)folderFallbackTitle;
-(id)uninstallAlertTitleNotAllowed;
-(id)uninstallAlertBody;
-(id)uninstallAlertBodyNotAllowed;
-(id)uninstallAlertBodyForAppWithDocumentsInCloud;
-(id)uninstallAlertBodyForAppWithDocumentUpdatesPending;
-(BOOL)isUninstalled;
-(id)badgeNumberOrString;
-(BOOL)isUninstallSupported;
-(void)reloadIconImage;
-(id)getStandardIconImageForLocation:(int)arg1 ;
-(void)purgeCachedImages;
-(id)getIconImage:(int)arg1 ;
-(id)accessoryTextForLocation:(int)arg1 ;
-(void)completeUninstall;
-(void)setUninstalled;
-(BOOL)launchEnabled;
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1 ;
-(void)noteBadgeDidChange;
-(long long)localizedCompareDisplayNames:(id)arg1 ;
-(id)gridCellImage;
-(int)iconFormatForLocation:(int)arg1 ;
-(id)getGenericIconImage:(int)arg1 ;
-(void)addNodeObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(double)progressPercent;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(BOOL)progressIsPaused;
-(BOOL)shouldAnimateProgress;
-(void)reloadIconImagePurgingImageCache:(BOOL)arg1 ;
-(int)accessoryTypeForLocation:(int)arg1 ;
-(BOOL)isRecentlyUpdated;
-(BOOL)canEllipsizeLabel;
-(BOOL)canTightenLabel;
-(BOOL)canReceiveGrabbedIcon;
-(BOOL)shouldWarmUp;
-(BOOL)matchesEntity:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)tags;
-(long long)badgeValue;
-(NSString *)displayName;
-(void)localeChanged;
-(void)setBadge:(id)arg1 ;
-(BOOL)hasObserver:(id)arg1 ;
-(long long)progressState;
-(BOOL)isBeta;
@end
