/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVOptions : DAVRequest {
}
+ (id)optionsRequestWithSession:(id)session path:(id)path;	// 0x314db021
+ (id)optionsRequestWithURL:(id)url;	// 0x314db059
- (id)initOptionsWithSession:(id)session path:(id)path;	// 0x314dafd5
- (id)initOptionsWithURL:(id)url;	// 0x314db001
@end

