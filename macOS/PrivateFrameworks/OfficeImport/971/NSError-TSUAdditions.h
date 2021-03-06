//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (TSUAdditions)
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithWarning:(id)arg1;
- (BOOL)tsu_isErrorPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL tsu_isNoSuchFileError;
@property(readonly, nonatomic) BOOL tsu_isCancelError;
@property(readonly, nonatomic) BOOL tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;
- (id)tsu_errorPreservingCancel;
- (id)tsu_errorPreservingAlertTitle;
@property(readonly, nonatomic) BOOL tsu_isWriteError;
@property(readonly, nonatomic) BOOL tsu_isCorruptedError;
@property(readonly, nonatomic) BOOL tsu_isReadError;
@end

