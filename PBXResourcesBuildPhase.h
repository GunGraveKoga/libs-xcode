#import <Foundation/Foundation.h>

// Local includes
#import "PBXCoder.h"


@interface PBXResourcesBuildPhase : NSObject
{
  NSMutableArray *files;
  NSString *buildActionMask;
  NSString *runOnlyForDeploymentPostprocessing;
}

// Methods....
- (NSMutableArray *) files; // getter
- (void) setFiles: (NSMutableArray *)object; // setter
- (NSString *) buildActionMask; // getter
- (void) setBuildActionMask: (NSString *)object; // setter
- (NSString *) runOnlyForDeploymentPostprocessing; // getter
- (void) setRunOnlyForDeploymentPostprocessing: (NSString *)object; // setter

@end