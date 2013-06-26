/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {
	WebResource *cachedMainResource;	// 4 = 0x4
	NSArray *cachedSubresources;	// 8 = 0x8
	NSArray *cachedSubframeArchives;	// 12 = 0xc
	RefPtr<WebCore::LegacyWebArchive> coreArchive;	// 16 = 0x10
}
+ (void)initialize;	// 0x36788ecd
- (id)init;	// 0x36788ed1
- (id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)coreArchive;	// 0x36789025
- (id).cxx_construct;	// 0x367891b9
- (void).cxx_destruct;	// 0x3678918d
- (LegacyWebArchive *)coreArchive;	// 0x367890a5
- (void)dealloc;	// 0x367890f1
- (void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>)archive;	// 0x367890b5
@end
