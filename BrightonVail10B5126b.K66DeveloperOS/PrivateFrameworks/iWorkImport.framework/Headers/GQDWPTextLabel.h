/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDWPTextLabel : NSObject {
	CFStringRef mFormat;	// 4 = 0x4
	int mLabelType;	// 8 = 0x8
	int mFirst;	// 12 = 0xc
}
- (void)dealloc;	// 0x368ccfa9
- (int)first;	// 0x368cd009
- (CFStringRef)format;	// 0x368ccfe9
- (int)labelType;	// 0x368ccff9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x368ccea5
@end
