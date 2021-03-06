/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ESDContainer;

__attribute__((visibility("hidden")))
@interface ESDObject : NSObject {
@private
	EshObject *mEshObject;	// 4 = 0x4
	ESDContainer *mParent;	// 8 = 0x8
	bool mIsChart;	// 12 = 0xc
}
@property(assign, getter=isChart) bool chart;	// G=0x34b88139; S=0x34cdd27d; converted property
- (id)initFromReader:(OcReader *)reader type:(unsigned short)type version:(unsigned short)version;	// 0x34c63f91
- (id)initWithEshObject:(EshObject *)eshObject;	// 0x34bfc4d5
- (id)initWithType:(unsigned short)type;	// 0x34bfbf71
- (void)dealloc;	// 0x34c000b9
- (id)ebInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x34c64615
- (EshGroup *)eshGroup;	// 0x34e2b129
- (EshObject *)eshObject;	// 0x34b86d29
- (EshShape *)eshShape;	// 0x34b880f9
// converted property getter: - (bool)isChart;	// 0x34b88139
- (id)parent;	// 0x34cb6b65
- (id)pbInitWithType:(unsigned short)type version:(unsigned short)version state:(id)state;	// 0x34c2b9bd
// converted property setter: - (void)setChart:(bool)chart;	// 0x34cdd27d
- (long)shapeID;	// 0x34e2b165
@end

