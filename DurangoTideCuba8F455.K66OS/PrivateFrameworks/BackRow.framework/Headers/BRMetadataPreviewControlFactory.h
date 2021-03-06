/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControlHeightFactory.h"
#import <NSObject.h> // Unknown library
#import "BRControlFactory.h"


@interface BRMetadataPreviewControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
}
+ (id)factory;	// 0x32f5c375
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x32f5c279
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x32f5c275
@end

