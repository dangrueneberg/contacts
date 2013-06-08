#import <UIKit/UIKit.h>
#import <AddressBookUI/AddressBookUI.h>

@interface FirstViewController : UIViewController <ABPeoplePickerNavigationControllerDelegate, UITableViewDelegate, UITableViewDataSource>


@property (weak, nonatomic) IBOutlet UITableView *myTable;



- (IBAction)showPicker:(id)sender;

@property (weak, nonatomic) IBOutlet NSString *name1;

@property (weak, nonatomic) IBOutlet NSString *email;

@property (strong, nonatomic) NSMutableArray *names;

@property (strong, nonatomic) NSMutableArray *email1;

@end
