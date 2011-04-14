/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;	// 104 = 0x68
	NSURL *_destinationURL;	// 108 = 0x6c
}
@property(retain) NSURL *destinationURL;	// G=0x317b1995; S=0x317b19d9; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x317b1075; S=0x317b1085; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x317b1041
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x317b1219
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x317b16c9
- (id)initWithURL:(id)url;	// 0x317b1299
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x317b123d
- (id)additionalHeaderValues;	// 0x317b116d
- (void)dealloc;	// 0x317b168d
- (id)description;	// 0x317b1555
// declared property getter: - (id)destinationURL;	// 0x317b1995
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317b1805
// declared property getter: - (int)overwrite;	// 0x317b1075
- (id)requestBody;	// 0x317b103d
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x317b19d9
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x317b1085
@end
