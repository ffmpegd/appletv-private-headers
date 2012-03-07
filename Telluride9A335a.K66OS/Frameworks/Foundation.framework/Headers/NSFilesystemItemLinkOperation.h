/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFilesystemItemCopyOperation.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation {
}
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x32072901
+ (id)filesystemItemLinkOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x32072915
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x32072c11
- (BOOL)_shouldLinkItemAtPath:(const char *)path toPath:(const char *)path2;	// 0x32072af5
- (BOOL)_shouldProceedAfterErrno:(int)errno linkingItemAtPath:(const char *)path toPath:(const char *)path3;	// 0x3207299d
- (BOOL)_validatePaths:(id *)paths;	// 0x32072bc1
- (BOOL)shouldLinkItemAtPath:(id)path toPath:(id)path2;	// 0x32072ac5
- (BOOL)shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path3;	// 0x32072969
@end

