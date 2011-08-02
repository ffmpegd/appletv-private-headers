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
@property(retain) NSURL *destinationURL;	// G=0x33189995; S=0x331899d9; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x33189075; S=0x33189085; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x33189041
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x33189219
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x331896c9
- (id)initWithURL:(id)url;	// 0x33189299
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x3318923d
- (id)additionalHeaderValues;	// 0x3318916d
- (void)dealloc;	// 0x3318968d
- (id)description;	// 0x33189555
// declared property getter: - (id)destinationURL;	// 0x33189995
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33189805
// declared property getter: - (int)overwrite;	// 0x33189075
- (id)requestBody;	// 0x3318903d
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x331899d9
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x33189085
@end
