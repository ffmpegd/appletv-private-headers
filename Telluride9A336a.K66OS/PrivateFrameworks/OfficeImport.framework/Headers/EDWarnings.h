/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EDWarnings : NSObject {
@private
	CFArrayRef mWarnings;	// 4 = 0x4
}
- (id)init;	// 0x34c56da5
- (void)addWarning:(CPTaggedMessageStructure *)warning;	// 0x34c62221
- (void)dealloc;	// 0x34c8f0e9
- (void)reportWarningsWithAssociatedObject:(id)associatedObject;	// 0x34ddae51
@end
