/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryTraversalOperation.h"
#import "Foundation-Structs.h"

@class NSString, NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {
@private
	NSString *_destinationPath;	// 40 = 0x28
	NSMutableSet *_skippedPaths;	// 44 = 0x2c
}
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x30668211
+ (id)filesystemItemCopyOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x306682fd
- (void)initWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x30668271
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x306685d9
- (BOOL)_shouldCopyItemAtPath:(const char *)path toPath:(const char *)path2;	// 0x30668381
- (BOOL)_shouldProceedAfterErrno:(int)errno copyingItemAtPath:(const char *)path toPath:(const char *)path3;	// 0x30668481
- (BOOL)_validatePaths:(id *)paths;	// 0x30668589
- (void)dealloc;	// 0x306688a1
- (BOOL)shouldCopyItemAtPath:(id)path toPath:(id)path2;	// 0x30668351
- (BOOL)shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path3;	// 0x3066844d
@end

