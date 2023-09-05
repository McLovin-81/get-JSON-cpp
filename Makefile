# The @ suppresses printing of the command

EXECUTABLE = readJson stringToJson

clean:
	@echo "deleting..."
	@rm -f $(EXECUTABLE)
