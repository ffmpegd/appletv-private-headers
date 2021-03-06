/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "PTPCameraFolder.h"

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {
	NSMutableArray *_tempArrayOfAllObjectHandles;	// 28 = 0x1c
	NSMutableArray *_tempArrayOfAllObjectHandlesToBeIgnored;	// 32 = 0x20
}
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandles;	// G=0x35aea109; converted property
@property(readonly, retain) NSMutableArray *tempArrayOfAllObjectHandlesToBeIgnored;	// G=0x35aea119; converted property
- (id)initWithStorageID:(unsigned long)storageID device:(id)device;	// 0x35ae9dd5
- (void)dealloc;	// 0x35ae9e41
- (void)prime;	// 0x35ae9f25
- (void)refreshInfo;	// 0x35ae9ea5
// converted property getter: - (id)tempArrayOfAllObjectHandles;	// 0x35aea109
// converted property getter: - (id)tempArrayOfAllObjectHandlesToBeIgnored;	// 0x35aea119
@end

