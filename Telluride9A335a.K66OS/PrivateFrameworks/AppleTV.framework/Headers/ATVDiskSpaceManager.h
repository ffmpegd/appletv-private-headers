/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVDiskSpaceManager : BRSingleton {
}
+ (void)setSingleton:(id)singleton;	// 0x3409e45d
+ (id)singleton;	// 0x3409e44d
- (id)init;	// 0x3409e46d
- (id)_volumeSizeStringForSize:(unsigned long long)size;	// 0x3409e6dd
- (void)dealloc;	// 0x3409e499
- (unsigned long long)mediaCapacity;	// 0x3409e56d
- (id)mediaCapacityString;	// 0x3409e5f1
- (unsigned long long)mediaFreeSpace;	// 0x3409e625
- (id)mediaFreeSpaceString;	// 0x3409e6a9
- (unsigned long long)primaryStreamedMediaRepositorySize;	// 0x3409e4c5
- (unsigned long long)primaryStreamedMediaRespositoryMaxFileSize;	// 0x3409e535
- (unsigned long long)shortContentStreamedMediaRepositorySize;	// 0x3409e555
- (unsigned long long)shortContentStreamedMediaRespositoryMaxFileSize;	// 0x3409e55d
@end

