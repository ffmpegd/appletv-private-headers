/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;	// 120 = 0x78
	NSURL *_destinationURL;	// 124 = 0x7c
}
@property(retain) NSURL *destinationURL;	// G=0x32c4f3b9; S=0x32c4f3cd; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x32c4f399; S=0x32c4f3a9; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x32c4f361
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x32c4ed85
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x32c4eda9
- (id)initWithURL:(id)url;	// 0x32c4ed81
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x32c4f35d
- (id)additionalHeaderValues;	// 0x32c4f0c1
- (void)dealloc;	// 0x32c4ef11
- (id)description;	// 0x32c4ef5d
// declared property getter: - (id)destinationURL;	// 0x32c4f3b9
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x32c4f1f1
// declared property getter: - (int)overwrite;	// 0x32c4f399
- (id)requestBody;	// 0x32c4f0bd
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x32c4f3cd
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x32c4f3a9
@end

