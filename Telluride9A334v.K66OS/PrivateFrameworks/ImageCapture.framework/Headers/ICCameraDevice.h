/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import "ICDevice.h"

@class NSString, NSArray;

@interface ICCameraDevice : ICDevice {
@private
	void *_cameraProperties;	// 8 = 0x8
}
@property(assign, getter=isAccessRestrictedAppleDevice) BOOL accessRestrictedAppleDevice;	// G=0x3222c759; S=0x3222c77d; 
@property(assign) BOOL allowsSyncingClock;	// G=0x3222c4c1; S=0x3222c4e5; 
@property(readonly, assign) unsigned batteryLevel;	// G=0x3222c52d; 
@property(readonly, assign) BOOL batteryLevelAvailable;	// G=0x3222c509; 
@property(assign) BOOL beingEjected;	// G=0x3222c431; S=0x3222c455; 
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x3222c715; S=0x3222c735; 
@property(readonly, assign) NSArray *contents;	// G=0x3222c81d; 
@property(assign, getter=isEjectable) BOOL ejectable;	// G=0x3222c3e9; S=0x3222c40d; 
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x3222c58d; S=0x3222c5ad; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x3222c479; S=0x3222c49d; 
@property(readonly, assign) NSArray *mediaFiles;	// G=0x3222e6f5; 
@property(assign) unsigned numberOfDownloadableItems;	// G=0x3222c651; S=0x3222c671; 
@property(readonly, assign) double timeOffset;	// G=0x3222c54d; 
@property(copy) NSString *volumePath;	// G=0x3222c3a5; S=0x3222c3c5; 
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3222cfc5
- (id)init;	// 0x3222ecdd
- (void)addFolder:(id)folder;	// 0x3222c9d9
- (void)addToMetadataFetchQ:(id)metadataFetchQ;	// 0x3222d04d
- (void)addToThumbnailFetchQ:(id)thumbnailFetchQ;	// 0x3222d0b9
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x3222c4c1
// declared property getter: - (unsigned)batteryLevel;	// 0x3222c52d
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x3222c509
// declared property getter: - (BOOL)beingEjected;	// 0x3222c431
- (void)cancelDownload;	// 0x3222d125
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x3222c715
// declared property getter: - (id)contents;	// 0x3222c81d
- (void)dealloc;	// 0x3222eb79
- (void)decrementEstimatedNumberOfDownloadableItems;	// 0x3222c5d1
- (void)decrementNumberOfDownloadableItems;	// 0x3222c695
- (id)description;	// 0x3222ce21
- (dispatch_semaphore_s *)deviceQSemaphore;	// 0x3222c7c1
- (double)downloadCancelTimestamp;	// 0x3222c56d
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x3222c58d
- (id)filesOfType:(id)type;	// 0x3222e5cd
- (void)finalize;	// 0x3222ea15
- (dispatch_queue_s *)generalQ;	// 0x3222c7a1
- (void)handleCommandCompletionNotification:(id)notification;	// 0x3222e091
- (void)handleImageCaptureEventNotification:(id)notification;	// 0x3222d715
- (void)incrementEstimatedNumberOfDownloadableItems;	// 0x3222c611
- (void)incrementNumberOfDownloadableItems;	// 0x3222c6d5
// declared property getter: - (BOOL)isAccessRestrictedAppleDevice;	// 0x3222c759
// declared property getter: - (BOOL)isEjectable;	// 0x3222c3e9
// declared property getter: - (BOOL)isLocked;	// 0x3222c479
// declared property getter: - (id)mediaFiles;	// 0x3222e6f5
- (void)notifyDelegateOfAddedItem:(id)addedItem;	// 0x3222e8d1
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x3222c651
- (void)pendNotifyingDelegateOfAddedItem:(id)addedItem;	// 0x3222c7e1
- (void)receivedDeviceCommandCompletion;	// 0x3222d021
- (void)removeFolder:(id)folder;	// 0x3222ca7d
- (void)requestCloseSession;	// 0x3222c83d
- (void)requestDeleteFiles:(id)files;	// 0x3222d3d1
- (void)requestDownloadFile:(id)file options:(id)options downloadDelegate:(id)delegate didDownloadSelector:(SEL)selector contextInfo:(void *)info;	// 0x3222d16d
- (void)requestEject;	// 0x3222d319
- (void)requestOpenSession;	// 0x3222d515
- (void)requestSyncClock;	// 0x3222c979
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x3222c77d
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x3222c4e5
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x3222c455
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x3222c735
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x3222c40d
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x3222c5ad
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x3222c49d
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x3222c671
// declared property setter: - (void)setVolumePath:(id)path;	// 0x3222c3c5
// declared property getter: - (double)timeOffset;	// 0x3222c54d
// declared property getter: - (id)volumePath;	// 0x3222c3a5
@end

