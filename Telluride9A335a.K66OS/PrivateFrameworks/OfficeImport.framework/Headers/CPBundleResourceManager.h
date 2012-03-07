/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CPBundleResourceManager : NSObject {
@private
	NSMutableDictionary *mPackageMap;	// 4 = 0x4
}
+ (void)disposeInstance;	// 0x353efa3d
+ (id)instance;	// 0x352d5629
- (id)init;	// 0x352d570d
- (id)dataForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x353efafd
- (void)dealloc;	// 0x353efba9
- (id)packageWithName:(id)name;	// 0x352d581d
- (xmlDoc *)xmlDocumentForResource:(id)resource ofType:(id)type inPackage:(id)package;	// 0x352d5771
@end

