/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask {
	NSMutableSet *_propertiesToExpand;	// 112 = 0x70
}
@property(retain) NSMutableSet *propertiesToExpand;	// G=0x3319f691; S=0x3319f6f1; @synthesize=_propertiesToExpand
- (id)initWithPropertiesToFind:(id)find atURL:(id)url expandedName:(id)name expandedNameSpace:(id)space;	// 0x3319f4fd
- (void)addPropertyToExpandWithPropertiesToFind:(id)find expandedName:(id)name expandedNameSpace:(id)space;	// 0x3319f385
- (void)dealloc;	// 0x3319f575
- (id)description;	// 0x3319f43d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3319f3f9
- (id)httpMethod;	// 0x3319f379
- (id)parseHints;	// 0x3319f7a1
// declared property getter: - (id)propertiesToExpand;	// 0x3319f691
- (id)requestBody;	// 0x3319fab5
// declared property setter: - (void)setPropertiesToExpand:(id)expand;	// 0x3319f6f1
@end

