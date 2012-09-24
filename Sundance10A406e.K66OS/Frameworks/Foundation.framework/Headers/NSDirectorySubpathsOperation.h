/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSDirectoryTraversalOperation.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSDirectorySubpathsOperation : NSDirectoryTraversalOperation {
	NSMutableArray *_subpaths;	// 40 = 0x28
}
@property(readonly, retain) NSMutableArray *subpaths;	// G=0x35574ed5; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x35574d9d
+ (id)directorySubpathsOperationAtPath:(id)path;	// 0x35574da9
- (void)dealloc;	// 0x35574f41
- (void)handlePathname:(id)pathname;	// 0x35574df9
// converted property getter: - (id)subpaths;	// 0x35574ed5
@end
