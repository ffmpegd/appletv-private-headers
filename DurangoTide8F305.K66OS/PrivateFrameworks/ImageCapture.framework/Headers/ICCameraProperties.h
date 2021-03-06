/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library
#import "ImageCapture-Structs.h"

@class NSString, NSMutableArray;

@interface ICCameraProperties : NSObject {
	NSString *_volumePath;	// 4 = 0x4
	BOOL _ejectable;	// 8 = 0x8
	BOOL _beingEjected;	// 9 = 0x9
	BOOL _locked;	// 10 = 0xa
	BOOL _allowsSyncingClock;	// 11 = 0xb
	unsigned _contentCatalogPercentCompleted;	// 12 = 0xc
	BOOL _batteryLevelAvailable;	// 16 = 0x10
	unsigned _batteryLevel;	// 20 = 0x14
	NSMutableArray *_contents;	// 24 = 0x18
	NSMutableArray *_mediaFiles;	// 28 = 0x1c
	NSMutableArray *_toBeNotifiedAddedItems;	// 32 = 0x20
	int _contentsLock;	// 36 = 0x24
	int _mediaFilesLock;	// 40 = 0x28
	double _timeOffset;	// 44 = 0x2c
	unsigned _estimatedNumberOfDownloadableItems;	// 52 = 0x34
	unsigned _numberOfDownloadableItems;	// 56 = 0x38
	BOOL _contentReceived;	// 60 = 0x3c
	double _downloadCancelTimestamp;	// 64 = 0x40
	dispatch_queue_s *_thumbnailFetchQ;	// 72 = 0x48
	dispatch_queue_s *_metadataFetchQ;	// 76 = 0x4c
	dispatch_queue_s *_downloadQ;	// 80 = 0x50
	dispatch_queue_s *_generalQ;	// 84 = 0x54
	dispatch_semaphore_s *_deviceQSemaphore;	// 88 = 0x58
	BOOL _accessRestrictedAppleDevice;	// 92 = 0x5c
}
@property(assign) BOOL accessRestrictedAppleDevice;	// G=0x312dd48d; S=0x312dd49d; @synthesize=_accessRestrictedAppleDevice
@property(assign) BOOL allowsSyncingClock;	// G=0x312dd64d; S=0x312dd65d; @synthesize=_allowsSyncingClock
@property(assign) unsigned batteryLevel;	// G=0x312dd5ed; S=0x312dd5fd; @synthesize=_batteryLevel
@property(assign) BOOL batteryLevelAvailable;	// G=0x312dd60d; S=0x312dd61d; @synthesize=_batteryLevelAvailable
@property(assign) BOOL beingEjected;	// G=0x312dd68d; S=0x312dd69d; @synthesize=_beingEjected
@property(assign) unsigned contentCatalogPercentCompleted;	// G=0x312dd62d; S=0x312dd63d; @synthesize=_contentCatalogPercentCompleted
@property(assign) BOOL contentReceived;	// G=0x312dd54d; S=0x312dd55d; @synthesize=_contentReceived
@property(retain) NSMutableArray *contents;	// G=0x312de1e1; S=0x312de255; @synthesize=_contents
@property(assign) int contentsLock;	// G=0x312dd5ad; S=0x312dd5bd; @synthesize=_contentsLock
@property(assign) dispatch_semaphore_s *deviceQSemaphore;	// G=0x312dd4ad; S=0x312dd4bd; @synthesize=_deviceQSemaphore
@property(assign) double downloadCancelTimestamp;	// G=0x312de19d; S=0x312de171; @synthesize=_downloadCancelTimestamp
@property(assign) dispatch_queue_s *downloadQ;	// G=0x312dd4ed; S=0x312dd4fd; @synthesize=_downloadQ
@property(assign) BOOL ejectable;	// G=0x312dd6ad; S=0x312dd6bd; @synthesize=_ejectable
@property(assign) unsigned estimatedNumberOfDownloadableItems;	// G=0x312dd58d; S=0x312dd59d; @synthesize=_estimatedNumberOfDownloadableItems
@property(assign) dispatch_queue_s *generalQ;	// G=0x312dd4cd; S=0x312dd4dd; @synthesize=_generalQ
@property(assign) BOOL locked;	// G=0x312dd66d; S=0x312dd67d; @synthesize=_locked
@property(retain) NSMutableArray *mediaFiles;	// G=0x312de1f9; S=0x312de281; @synthesize=_mediaFiles
@property(assign) int mediaFilesLock;	// G=0x312dd5cd; S=0x312dd5dd; @synthesize=_mediaFilesLock
@property(assign) dispatch_queue_s *metadataFetchQ;	// G=0x312dd50d; S=0x312dd51d; @synthesize=_metadataFetchQ
@property(assign) unsigned numberOfDownloadableItems;	// G=0x312dd56d; S=0x312dd57d; @synthesize=_numberOfDownloadableItems
@property(assign) dispatch_queue_s *thumbnailFetchQ;	// G=0x312dd52d; S=0x312dd53d; @synthesize=_thumbnailFetchQ
@property(assign) double timeOffset;	// G=0x312de145; S=0x312de119; @synthesize=_timeOffset
@property(retain) NSMutableArray *toBeNotifiedAddedItems;	// G=0x312de211; S=0x312de2ad; @synthesize=_toBeNotifiedAddedItems
@property(retain) NSString *volumePath;	// G=0x312de1c9; S=0x312de229; @synthesize=_volumePath
// declared property getter: - (BOOL)accessRestrictedAppleDevice;	// 0x312dd48d
// declared property getter: - (BOOL)allowsSyncingClock;	// 0x312dd64d
// declared property getter: - (unsigned)batteryLevel;	// 0x312dd5ed
// declared property getter: - (BOOL)batteryLevelAvailable;	// 0x312dd60d
// declared property getter: - (BOOL)beingEjected;	// 0x312dd68d
// declared property getter: - (unsigned)contentCatalogPercentCompleted;	// 0x312dd62d
// declared property getter: - (BOOL)contentReceived;	// 0x312dd54d
// declared property getter: - (id)contents;	// 0x312de1e1
// declared property getter: - (int)contentsLock;	// 0x312dd5ad
- (void)dealloc;	// 0x312de0a5
// declared property getter: - (dispatch_semaphore_s *)deviceQSemaphore;	// 0x312dd4ad
// declared property getter: - (double)downloadCancelTimestamp;	// 0x312de19d
// declared property getter: - (dispatch_queue_s *)downloadQ;	// 0x312dd4ed
// declared property getter: - (BOOL)ejectable;	// 0x312dd6ad
// declared property getter: - (unsigned)estimatedNumberOfDownloadableItems;	// 0x312dd58d
- (void)finalize;	// 0x312de031
// declared property getter: - (dispatch_queue_s *)generalQ;	// 0x312dd4cd
- (void)lockContents;	// 0x312dd6cd
- (void)lockMediaFiles;	// 0x312dd6e5
// declared property getter: - (BOOL)locked;	// 0x312dd66d
// declared property getter: - (id)mediaFiles;	// 0x312de1f9
// declared property getter: - (int)mediaFilesLock;	// 0x312dd5cd
// declared property getter: - (dispatch_queue_s *)metadataFetchQ;	// 0x312dd50d
// declared property getter: - (unsigned)numberOfDownloadableItems;	// 0x312dd56d
// declared property setter: - (void)setAccessRestrictedAppleDevice:(BOOL)device;	// 0x312dd49d
// declared property setter: - (void)setAllowsSyncingClock:(BOOL)clock;	// 0x312dd65d
// declared property setter: - (void)setBatteryLevel:(unsigned)level;	// 0x312dd5fd
// declared property setter: - (void)setBatteryLevelAvailable:(BOOL)available;	// 0x312dd61d
// declared property setter: - (void)setBeingEjected:(BOOL)ejected;	// 0x312dd69d
// declared property setter: - (void)setContentCatalogPercentCompleted:(unsigned)completed;	// 0x312dd63d
// declared property setter: - (void)setContentReceived:(BOOL)received;	// 0x312dd55d
// declared property setter: - (void)setContents:(id)contents;	// 0x312de255
// declared property setter: - (void)setContentsLock:(int)lock;	// 0x312dd5bd
// declared property setter: - (void)setDeviceQSemaphore:(dispatch_semaphore_s *)semaphore;	// 0x312dd4bd
// declared property setter: - (void)setDownloadCancelTimestamp:(double)timestamp;	// 0x312de171
// declared property setter: - (void)setDownloadQ:(dispatch_queue_s *)q;	// 0x312dd4fd
// declared property setter: - (void)setEjectable:(BOOL)ejectable;	// 0x312dd6bd
// declared property setter: - (void)setEstimatedNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x312dd59d
// declared property setter: - (void)setGeneralQ:(dispatch_queue_s *)q;	// 0x312dd4dd
// declared property setter: - (void)setLocked:(BOOL)locked;	// 0x312dd67d
// declared property setter: - (void)setMediaFiles:(id)files;	// 0x312de281
// declared property setter: - (void)setMediaFilesLock:(int)lock;	// 0x312dd5dd
// declared property setter: - (void)setMetadataFetchQ:(dispatch_queue_s *)q;	// 0x312dd51d
// declared property setter: - (void)setNumberOfDownloadableItems:(unsigned)downloadableItems;	// 0x312dd57d
// declared property setter: - (void)setThumbnailFetchQ:(dispatch_queue_s *)q;	// 0x312dd53d
// declared property setter: - (void)setTimeOffset:(double)offset;	// 0x312de119
// declared property setter: - (void)setToBeNotifiedAddedItems:(id)beNotifiedAddedItems;	// 0x312de2ad
// declared property setter: - (void)setVolumePath:(id)path;	// 0x312de229
// declared property getter: - (dispatch_queue_s *)thumbnailFetchQ;	// 0x312dd52d
// declared property getter: - (double)timeOffset;	// 0x312de145
// declared property getter: - (id)toBeNotifiedAddedItems;	// 0x312de211
- (void)unlockContents;	// 0x312dd6fd
- (void)unlockMediaFiles;	// 0x312dd715
// declared property getter: - (id)volumePath;	// 0x312de1c9
@end

