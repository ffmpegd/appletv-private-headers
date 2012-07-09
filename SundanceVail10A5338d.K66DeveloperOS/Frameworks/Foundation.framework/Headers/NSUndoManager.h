/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface NSUndoManager : NSObject {
	id _undoStack;	// 4 = 0x4
	id _redoStack;	// 8 = 0x8
	NSArray *_runLoopModes;	// 12 = 0xc
	unsigned long long _NSUndoManagerPrivate1;	// 16 = 0x10
	id _target;	// 24 = 0x18
	id _proxy;	// 28 = 0x1c
	void *_NSUndoManagerPrivate2;	// 32 = 0x20
	void *_NSUndoManagerPrivate3;	// 36 = 0x24
}
@property(assign) BOOL groupsByEvent;	// G=0x37348df5; S=0x373dbe9d; converted property
@property(assign) unsigned levelsOfUndo;	// G=0x373dbef1; S=0x373dbed1; converted property
@property(retain) NSArray *runLoopModes;	// G=0x37348b01; S=0x373dbf11; converted property
+ (void)_endTopLevelGroupings;	// 0x373dbab5
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)iterations;	// 0x373dbaa5
- (id)init;	// 0x37347249
- (void)_cancelAutomaticTopLevelGroupEnding;	// 0x373dbd21
- (void)_commitUndoGrouping;	// 0x373dbc2d
- (void)_delayAutomaticTermination:(double)termination;	// 0x37347565
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)empty;	// 0x37349219
- (void)_forwardTargetInvocation:(id)invocation;	// 0x373dc679
- (id)_methodSignatureForTargetSelector:(SEL)targetSelector;	// 0x373dc629
- (void)_postCheckpointNotification;	// 0x37349491
- (void)_prepareEventGrouping;	// 0x37348969
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x3734919d
- (void)_registerUndoObject:(id)object;	// 0x373487f9
- (void)_rollbackUndoGrouping;	// 0x373dbc5d
- (void)_scheduleAutomaticTopLevelGroupEnding;	// 0x37348a01
- (void)_setGroupIdentifier:(id)identifier;	// 0x37348e21
- (BOOL)_shouldCoalesceTypingForText:(id)text :(id)arg2;	// 0x373db9bd
- (id)_undoStack;	// 0x373db9ad
- (void)beginUndoGrouping;	// 0x37348b11
- (BOOL)canRedo;	// 0x373dc589
- (BOOL)canUndo;	// 0x37353b15
- (void)dealloc;	// 0x3734ff45
- (void)disableUndoRegistration;	// 0x373dbdc5
- (void)enableUndoRegistration;	// 0x373dbde5
- (void)endUndoGrouping;	// 0x373491e5
- (void)finalize;	// 0x373dbcd5
- (int)groupingLevel;	// 0x373495c1
// converted property getter: - (BOOL)groupsByEvent;	// 0x37348df5
- (BOOL)isRedoing;	// 0x373486d9
- (BOOL)isUndoRegistrationEnabled;	// 0x373dbe81
- (BOOL)isUndoing;	// 0x373486c1
// converted property getter: - (unsigned)levelsOfUndo;	// 0x373dbef1
- (id)prepareWithInvocationTarget:(id)invocationTarget;	// 0x373dc5c9
- (void)redo;	// 0x373dc2f5
- (BOOL)redoActionIsDiscardable;	// 0x373dc909
- (id)redoActionName;	// 0x373dc7b9
- (id)redoMenuItemTitle;	// 0x373dc9cd
- (id)redoMenuTitleForUndoActionName:(id)undoActionName;	// 0x373dcae1
- (void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x373486f5
- (void)removeAllActions;	// 0x37347461
- (void)removeAllActionsWithTarget:(id)target;	// 0x37349605
// converted property getter: - (id)runLoopModes;	// 0x37348b01
- (void)setActionIsDiscardable:(BOOL)discardable;	// 0x373dc7f5
- (void)setActionName:(id)name;	// 0x37348e0d
// converted property setter: - (void)setGroupsByEvent:(BOOL)event;	// 0x373dbe9d
// converted property setter: - (void)setLevelsOfUndo:(unsigned)undo;	// 0x373dbed1
// converted property setter: - (void)setRunLoopModes:(id)modes;	// 0x373dbf11
- (void)undo;	// 0x373dbf71
- (BOOL)undoActionIsDiscardable;	// 0x373dc8e5
- (id)undoActionName;	// 0x373dc781
- (id)undoMenuItemTitle;	// 0x373dc92d
- (id)undoMenuTitleForUndoActionName:(id)undoActionName;	// 0x373dca75
- (void)undoNestedGroup;	// 0x373dc07d
@end
