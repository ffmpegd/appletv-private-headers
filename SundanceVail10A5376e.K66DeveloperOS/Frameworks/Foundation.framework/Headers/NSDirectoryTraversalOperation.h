/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"
#import "Foundation-Structs.h"

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface NSDirectoryTraversalOperation : NSOperation {
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_stream;	// 24 = 0x18
	int _optionsFlags;	// 28 = 0x1c
	int _lastDeviceInode;	// 32 = 0x20
	BOOL _shouldFilterUnderbars;	// 36 = 0x24
	BOOL _stopped;	// 37 = 0x25
}
@property(assign) id delegate;	// G=0x34da0841; S=0x34da0851; converted property
@property(readonly, retain) NSError *error;	// G=0x34da096d; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x34da0799
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x34da07f1
- (id)initWithPath:(id)path;	// 0x34da07a5
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x34da0a45
- (void)_setError:(id)error;	// 0x34da09a5
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x34da08bd
- (BOOL)_validatePaths:(id *)paths;	// 0x34da0b89
- (void)dealloc;	// 0x34da0d79
// converted property getter: - (id)delegate;	// 0x34da0841
// converted property getter: - (id)error;	// 0x34da096d
- (void)handlePathname:(id)pathname;	// 0x34da0861
- (void)main;	// 0x34da0b8d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34da0851
- (BOOL)shouldProceedAfterError:(id)error;	// 0x34da09e9
@end
