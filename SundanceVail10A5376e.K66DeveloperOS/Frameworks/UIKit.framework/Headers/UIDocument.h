/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSFilePresenter.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSURL, NSString, NSDate, NSOperationQueue, NSLock, NSDocumentDifferenceSize, NSUndoManager, NSTimer;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

@interface UIDocument : NSObject <NSFilePresenter> {
	NSURL *_fileURL;	// 4 = 0x4
	NSString *_fileType;	// 8 = 0x8
	NSString *_localizedName;	// 12 = 0xc
	NSUndoManager *_undoManager;	// 16 = 0x10
	NSDate *_fileModificationDate;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_fileAccessQueue;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_openingQueue;	// 28 = 0x1c
	NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;	// 32 = 0x20
	NSOperationQueue *_filePresenterQueue;	// 36 = 0x24
	id _differenceDueToRecentChanges;	// 40 = 0x28
	id _differenceSincePreservingPreviousVersion;	// 44 = 0x2c
	id _differenceSinceSaving;	// 48 = 0x30
	NSTimer *_autosavingTimer;	// 52 = 0x34
	double _lastSaveTime;	// 56 = 0x38
	unsigned _fileContentsPreservationReason;	// 64 = 0x40
	double _lastPreservationTime;	// 68 = 0x44
	id _versionWithoutRecentChanges;	// 76 = 0x4c
	NSMutableArray *_versions;	// 80 = 0x50
	void *_conflictObserver;	// 84 = 0x54
	NSLock *_documentPropertyLock;	// 88 = 0x58
	id _alertPresenter;	// 92 = 0x5c
	docFlags _docFlags;	// 96 = 0x60
}
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges;	// G=0x305af451; @synthesize=_differenceDueToRecentChanges
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;	// G=0x305af461; @synthesize=_differenceSincePreservingPreviousVersion
@property(readonly, assign, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving;	// G=0x305af471; @synthesize=_differenceSinceSaving
@property(readonly, assign) unsigned documentState;	// G=0x305a9869; 
@property(assign, getter=_isEditingDisabled, setter=_setEditingDisabled:) BOOL editingDisabled;	// G=0x305a92ad; S=0x305a9189; 
@property(copy) NSDate *fileModificationDate;	// G=0x305a911d; S=0x305a909d; 
@property(readonly, assign) NSString *fileType;	// G=0x305a8fa1; 
@property(readonly, assign) NSURL *fileURL;	// G=0x305a8eb5; 
@property(readonly, assign) NSString *localizedName;	// G=0x305add61; 
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x305addd5; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x305addc5; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(retain) NSUndoManager *undoManager;	// G=0x305ad889; S=0x305ad775; 
+ (void)_autosavingTimerDidFireSoContinue:(id)_autosavingTimer;	// 0x305abde9
+ (id)_customizationOfError:(id)error withDescription:(id)description recoverySuggestion:(id)suggestion recoveryAttempter:(id)attempter;	// 0x305a9a31
+ (id)_fileModificationDateForURL:(id)url;	// 0x305af491
+ (void)_finishWritingToURL:(id)url withTemporaryDirectoryURL:(id)temporaryDirectoryURL newContentsURL:(id)url3 afterSuccess:(BOOL)success;	// 0x305aa381
+ (id)_typeForContentsOfURL:(id)url error:(id *)error;	// 0x305a776d
+ (void)initialize;	// 0x305a7581
- (id)init;	// 0x305a77d5
- (id)initWithFileURL:(id)fileURL;	// 0x305a7865
- (void)_applicationDidBecomeActive:(id)_application;	// 0x305ae9c9
- (void)_applicationWillResignActive:(id)_application;	// 0x305ae839
- (void)_autosaveWithCompletionHandler:(id)completionHandler;	// 0x305ac831
- (void)_autosavingCompletedSuccessfully:(BOOL)successfully;	// 0x305abe09
- (double)_autosavingDelay;	// 0x305abddd
- (void)_changeWasDone:(id)done;	// 0x305ad415
- (void)_changeWasRedone:(id)redone;	// 0x305ad5d5
- (void)_changeWasUndone:(id)undone;	// 0x305ad525
- (void)_coordinateWritingItemAtURL:(id)url error:(id *)error byAccessor:(id)accessor;	// 0x305aa975
- (id)_fileOpeningQueue;	// 0x305af481
- (void)_finishSavingToURL:(id)url forSaveOperation:(int)saveOperation changeCount:(id)count;	// 0x305abcd1
- (BOOL)_hasSavingError;	// 0x305a959d
- (BOOL)_hasUnsavedChanges;	// 0x305acc45
// declared property getter: - (BOOL)_isEditingDisabled;	// 0x305a92ad
- (BOOL)_isInConflict;	// 0x305a9681
- (BOOL)_isInOpen;	// 0x305a94b9
- (BOOL)_isOpen;	// 0x305a940d
- (void)_lockFileAccessQueueAndPerformBlock:(id)block;	// 0x305a9945
- (void)_performBlock:(id)block synchronouslyOnQueue:(id)queue;	// 0x305af561
- (void)_performBlockSynchronouslyOnMainThread:(id)thread;	// 0x305af589
- (id)_presentableFileNameForSaveOperation:(int)saveOperation url:(id)url;	// 0x305aa4a1
- (void)_registerAsFilePresenterIfNecessary;	// 0x305a7f4d
- (void)_releaseUndoManager;	// 0x305ad685
- (void)_rescheduleAutosaving;	// 0x305abe61
- (void)_saveUnsavedChangesWithCompletionHandler:(id)completionHandler;	// 0x305ac391
- (void)_scheduleAutosaving;	// 0x305ac359
- (void)_scheduleAutosavingAfterDelay:(double)delay reset:(BOOL)reset;	// 0x305ac031
- (void)_sendStateChangedNotification;	// 0x305a96cd
// declared property setter: - (void)_setEditingDisabled:(BOOL)disabled;	// 0x305a9189
- (void)_setFileURL:(id)url;	// 0x305a8e21
- (void)_setHasSavingError:(BOOL)error;	// 0x305a9505
- (void)_setInConflict:(BOOL)conflict;	// 0x305a95e9
- (void)_setInOpen:(BOOL)open;	// 0x305a9459
- (void)_setOpen:(BOOL)open;	// 0x305a92f9
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;	// 0x305adea1
- (void)_unlockFileAccessQueue;	// 0x305a9a1d
- (void)_unregisterAsFilePresenterIfNecessary;	// 0x305a815d
- (void)_updateConflictState;	// 0x305aed79
- (void)_updateLocalizedName;	// 0x305adcc5
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id)completionHandler;	// 0x305aebc9
- (void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id)handler;	// 0x305aef71
- (void)autosaveWithCompletionHandler:(id)completionHandler;	// 0x305ac9dd
- (id)changeCountTokenForSaveOperation:(int)saveOperation;	// 0x305ad061
- (void)closeWithCompletionHandler:(id)completionHandler;	// 0x305ac9fd
- (id)contentsForType:(id)type error:(id *)error;	// 0x305aaf55
- (void)dealloc;	// 0x305a7b71
- (id)description;	// 0x305a7dc5
// declared property getter: - (id)differenceDueToRecentChanges;	// 0x305af451
// declared property getter: - (id)differenceSincePreservingPreviousVersion;	// 0x305af461
// declared property getter: - (id)differenceSinceSaving;	// 0x305af471
- (void)disableEditing;	// 0x305af44d
// declared property getter: - (unsigned)documentState;	// 0x305a9869
- (void)enableEditing;	// 0x305af449
- (id)fileAttributesToWriteToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x305aa909
// declared property getter: - (id)fileModificationDate;	// 0x305a911d
- (id)fileNameExtensionForType:(id)type saveOperation:(int)operation;	// 0x305add99
// declared property getter: - (id)fileType;	// 0x305a8fa1
// declared property getter: - (id)fileURL;	// 0x305a8eb5
- (void)finishedHandlingError:(id)error recovered:(BOOL)recovered;	// 0x305adbbd
- (void)handleError:(id)error userInteractionPermitted:(BOOL)permitted;	// 0x305ad915
- (BOOL)hasUnsavedChanges;	// 0x305acc99
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;	// 0x305aa335
// declared property getter: - (id)localizedName;	// 0x305add61
- (void)openWithCompletionHandler:(id)completionHandler;	// 0x305a836d
- (void)performAsynchronousFileAccessUsingBlock:(id)block;	// 0x305a98e1
- (void)presentedItemDidChange;	// 0x305aecf9
- (void)presentedItemDidGainVersion:(id)presentedItem;	// 0x305aee41
- (void)presentedItemDidLoseVersion:(id)presentedItem;	// 0x305aeed9
- (void)presentedItemDidMoveToURL:(id)presentedItem;	// 0x305aec5d
- (void)presentedItemDidResolveConflictVersion:(id)presentedItem;	// 0x305af311
// declared property getter: - (id)presentedItemOperationQueue;	// 0x305addd5
// declared property getter: - (id)presentedItemURL;	// 0x305addc5
- (void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;	// 0x305af1d1
- (void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;	// 0x305af271
- (void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url2;	// 0x305af129
- (void)presentedSubitemAtURL:(id)url didResolveConflictVersion:(id)version;	// 0x305af3a9
- (void)presentedSubitemDidAppearAtURL:(id)presentedSubitem;	// 0x305af011
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x305af09d
- (BOOL)readFromURL:(id)url error:(id *)error;	// 0x305a9f59
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x305ade0d
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x305adef9
- (void)revertToContentsOfURL:(id)url completionHandler:(id)handler;	// 0x305a9c19
- (void)savePresentedItemChangesWithCompletionHandler:(id)completionHandler;	// 0x305ae5a5
- (void)saveToURL:(id)url forSaveOperation:(int)saveOperation completionHandler:(id)handler;	// 0x305aafd9
- (id)savingFileType;	// 0x305ac9ed
// declared property setter: - (void)setFileModificationDate:(id)date;	// 0x305a909d
- (void)setFileType:(id)type;	// 0x305a8f21
// declared property setter: - (void)setUndoManager:(id)manager;	// 0x305ad775
// declared property getter: - (id)undoManager;	// 0x305ad889
- (void)updateChangeCount:(int)count;	// 0x305accb1
- (void)updateChangeCountWithToken:(id)token forSaveOperation:(int)saveOperation;	// 0x305ad23d
- (void)userInteractionNoLongerPermittedForError:(id)error;	// 0x305adca5
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(int)saveOperation error:(id *)error;	// 0x305aa525
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(int)saveOperation originalContentsURL:(id)url4 error:(id *)error;	// 0x305aa705
@end
